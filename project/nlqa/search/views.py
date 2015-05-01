from django.shortcuts import render
from django.views.generic import View

class SearchView(View):
	template_search = 'search_search.html'
	template_results = 'search_results.html'

	def get(self, request):
		''' Displays search page ''' 
		response_data = {}
		return render(request, self.template_search)

	def post(self, request):
		''' Displays search results '''
		response_data = {}
		return render(request, self.template_results, )
