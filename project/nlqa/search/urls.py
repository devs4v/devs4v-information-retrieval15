from django.conf.urls import include, url
from views import SearchView

urlpatterns = [ 
	url(r'^$', SearchView.as_view()),
]