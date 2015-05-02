from django.shortcuts import render
from django.views.generic import View
import lucene, shutil, os

class SearchView(View):
	# template_name = 'search_search.html'
	template_name = 'search_results.html'

	index_dir = "Indexfiles.INDEX"

	def __init__(self):
		super(SearchView, self).__init__()
		vm_env = lucene.getVMEnv()
		vm_env.attachCurrentThread()
		

	def get(self, request):
		''' Displays search page ''' 
		response_data = {}
		return render(request, self.template_name, {'method': 'search', 'data': response_data})

	def post(self, request):
		''' Displays search results '''
		query = request.POST.get('query', None)
		response_data = {}

		if query is not None:
			from QA_Searcher import QA_Searcher as qas

			qa = qas(index_dir=self.index_dir)
			# qa.initializeVM()

			response_data = qa.search(query)

		return render(request, self.template_name, {'method': 'result','query':query, 'results': response_data})
