from django.conf.urls import include, url
from django.contrib import admin
from search import urls as search_urls
from django.views.generic.base import TemplateView

urlpatterns = [
	# Examples:
	# url(r'^$', 'nlqa.views.home', name='home'),
	# url(r'^blog/', include('blog.urls')),

	url(r'^admin/', include(admin.site.urls)),
	url(r'^$', TemplateView.as_view(template_name='home.html')), 
	url(r'^search/', include(search_urls)),	
]
