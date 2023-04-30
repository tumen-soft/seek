all:
	g++ insertknuth.c -o insertknuth
	g++ quickknuth.c  -o quickknuth
	g++ mergeknuth.cpp -o mergeknuth -fno-stack-protector 
	g++ mergeknuth1.cpp -o mergeknuth1
	g++ shellknuth.cpp -o shellknuth
	g++ bubblesort.c -o bubble
	g++ countsort.c -o count
	g++ selectsort.c -o select
	g++ cocktailsort.c -o cocktail

	#compile complite.
	
	#wait ten seconds.
	./bubble
	./count
	./select
	./cocktail
	./insertknuth
	./quickknuth
	./mergeknuth
	./mergeknuth1
	#wait 5 sec.
	./shellknuth

push:
	git add .
	git commit
	# -m "see web page https://blueagle-so.github.io"
	GIT_SSL_NO_VERIFY=true git push
	
