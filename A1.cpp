#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>
#include "Sort.h"


using namespace std;




int main()
{
	
	ifstream file1("pokemonRandomSmall.csv");

	if(!file1.is_open())
	{

		cout << "File1 Cannot Open"<< endl;
	}
	else
	{
		cout << "File1 Open Succesfully" << endl;
                cout<<endl;
		cout << "Before Sorting" << endl;
		vector<int> prs;
		string line1;
		getline(file1,line1);
		int nprs=1;
		while(getline(file1,line1))
		{
			istringstream iss(line1);
			string pokn1, stat1;
			getline(iss, pokn1, ',');
			getline(iss, stat1, ',');
			prs.push_back(stoi(stat1));
			nprs++;
		}
                cout<<endl;
                cout << "Number of element in 1st Gen :" << nprs << endl;

		for(int i=0; i<prs.size(); i++)
		{
			cout << prs[i] << " ";	
		}

		cout << endl;
		int* prsarr = new int[nprs];

		for(int i=0; i<nprs; i++)
		{
			prsarr[i] = prs[i];
		}

		Sort s;
                cout<<endl;

                cout << "###After Applying InsertionSort###" << endl;
		s.insertion_sort(prsarr,nprs);


		for(int i=0; i<nprs; i++)
		{
			cout<< prsarr[i]<< " ";
		}
		
		cout << endl;
		//cout << "Number of element in 1st Gen :" << nprs << endl;
		cout << endl;
                int* prsarrm = new int[nprs];

		for(int i=0; i<prs.size(); i++)
		{
			prsarrm[i] = prs[i];
		}
                s.merge_sort(prsarrm, 0, nprs - 1);

                cout << "###After Applying Mergesort###" << endl;
                cout<<endl;
                cout<< "Number Of Com Merge: " << s.numofcomMerge<<endl;
                cout<<endl;

                for (int i = 0; i < nprs-1; i++) 
                {
                        cout << prsarrm[i] << " ";
                }
                cout << endl;
                cout<<endl;
		cout << "###After Applying QuickSort###"<<endl;
                cout<<endl;
                cout << endl;
                int* prsarrq = new int[nprs];

		for(int i=0; i<prs.size(); i++)
		{
			prsarrq[i] = prs[i];
		}

                s.quick_sort(prsarrq,0,nprs);
                cout<<endl;
                cout<< "Number Of Com: " << s.numofcomQuick<<endl;
                cout<<endl;

                for(int i=0; i<nprs; i++)
                {
                        cout << prsarrq[i] << " ";
                }


		//cout << "After Applying InsertionSort" << endl;
		cout << endl;
                cout<<endl;
                file1.close();
	}

	ifstream file2("pokemonRandomMedium.csv");

        if(!file2.is_open())
        {
                cout << "File2 Cannot Open"<< endl;
        }
        else
        {
                cout << "File2 Open Succesfully" << endl;
                cout<<endl;
		cout << "Before Sorting" << endl;
                cout<<endl;
		vector<int> prm;
                string line2;
		int nprm=1;
                getline(file2,line2);
                while(getline(file2,line2))
                {
                        istringstream iss(line2);
                        string pokn2, stat2;
                        getline(iss, pokn2, ',');
                        getline(iss, stat2, ',');
                        prm.push_back(stoi(stat2));
			nprm++;
                }

                for(int i=0; i<prm.size(); i++)
                {
                        cout << prm[i] << " ";
                }
		cout<<endl;

		cout << "Number of Element in 1st+2nd Gen: " << nprm << endl;
                cout<<endl;
                cout << "###After Applying InsertionSort###" << endl;
                cout<<endl;
		int * prmarr = new int[nprm];
		for(int i=1 ; i<nprm; i++)
		{
			prmarr[i] = prm[i];
		}

		Sort s1;
		s1.insertion_sort(prmarr,nprm);

		for(int i=0; i<nprm; i++)
		{
			cout << prmarr[i] << " ";
		}

		cout << endl << endl;

                cout << "###After Applying Mergesort###"<< endl;
                cout<<endl;
                int* prmarrm = new int[nprm];

		for(int i=0; i<prm.size(); i++)
		{
			prmarrm[i] = prm[i];
		}
                s1.merge_sort(prmarrm, 0, nprm - 1);
                cout<<endl;
                cout<< "Number Of Com Merge: " << s1.numofcomMerge<<endl;
                cout<<endl;

                for (int i = 0; i < nprm-1; i++) 
                {
                        cout << prmarrm[i] << " ";
                }
                cout << endl;
                cout<<endl;
                
                cout << "###After Applying QuickSort###"<<endl;
                cout<<endl;
                int* prmarrq = new int[nprm];

		for(int i=0; i<prm.size(); i++)
		{
			prmarrq[i] = prm[i];
		}

                s1.quick_sort(prmarrq,0,nprm);
                cout<< "Number Of Com: " << s1.numofcomQuick<<endl;
                cout<<endl;

                for(int i=0; i<nprm; i++)
                {
                        cout << prmarrq[i] << " ";
                }
                cout << endl<<endl;


		file2.close();
        }



        ifstream file3("pokemonRandomLarge.csv");

        if(!file3.is_open())
        {
                cout << "File3 Cannot Open"<< endl;
        }
        else
        {
                cout << "File3 Open Succesfully" << endl;
		cout << "Before Sorting" << endl<<endl;
		vector<int> prl;
                string line3;
		int nprl=1;
                getline(file3,line3);
                while(getline(file3,line3))
                {
                        istringstream iss(line3);
                        string pokn3, stat3;
                        getline(iss, pokn3, ',');
                        getline(iss, stat3, ',');
                        prl.push_back(stoi(stat3));
			nprl++;
                }
                cout<< "Large Dataset number : " << nprl << endl << endl;

                for(int i=0; i<prl.size(); i++)
                {
                        cout << prl[i] << " ";
                }
		cout<< endl<<endl;
                cout << "After Applying InsertionSort" << endl;
		int * prlarr = new int[nprl];
                for(int i=0 ; i<nprl; i++)
                {
                        prlarr[i] = prl[i];
                }

                Sort s2;
                s2.insertion_sort(prlarr,nprl);

                for(int i=0; i<nprl; i++)
                {
                        cout << prlarr[i] << " ";
                }

                cout << endl << endl;

                 cout << "###After Applying Mergesort###"<< endl;
                int* prlarrm = new int[nprl];

		for(int i=0; i<prl.size(); i++)
		{
			prlarrm[i] = prl[i];
		}
                s2.merge_sort(prlarrm, 0, nprl - 1);
                cout<< "Number Of Com Merge: " << s2.numofcomMerge<<endl;

                for (int i = 0; i < nprl-1; i++) 
                {
                        cout << prlarrm[i] << " ";
                }
                cout << endl;
                cout<<endl;
                
                cout << "###After Applying QuickSort###"<<endl;
                int* prlarrq = new int[nprl];

		for(int i=0; i<prl.size(); i++)
		{
			prlarrq[i] = prl[i];
		}

                s2.quick_sort(prlarrq,0,nprl);
                cout<< "Number Of Com: " << s2.numofcomQuick<<endl;

                for(int i=0; i<nprl; i++)
                {
                        cout << prlarrq[i] << " ";
                }
                cout << endl<<endl;


		file3.close();

        }	

	ifstream file4("pokemonReverseSortedSmall.csv");

        if(!file4.is_open())
        {
                cout << "File4 Cannot Open"<< endl;
        }
        else
        {
                cout << "File4 Open Succesfully" << endl;
		cout << "Before Sorting" << endl;
		vector<int> prevs;
                string line4;
		int nprevs=1;
                getline(file4,line4);
                while(getline(file4,line4))
                {
                        istringstream iss(line4);
                        string pokn4, stat4;
                        getline(iss, pokn4, ',');
                        getline(iss, stat4, ',');
                        prevs.push_back(stoi(stat4));
			nprevs++;
                }

                for(int i=0; i<prevs.size(); i++)
                {
                        cout << prevs[i] << " ";
                }
                cout<< endl;

                cout << "After Applying InsertionSort" << endl;
		 int * prevsarr = new int[nprevs];
                for(int i=0 ; i<nprevs; i++)
                {
                        prevsarr[i] = prevs[i];
                }

                Sort s3;
                s3.insertion_sort(prevsarr,nprevs);

                for(int i=0; i<nprevs; i++)
                {
                        cout << prevsarr[i] << " ";
                }

                cout << endl << endl;

                cout << endl << endl;

                 cout << "###After Applying Mergesort###"<< endl;
                int* prevsarrm = new int[nprevs];

		for(int i=0; i<prevs.size(); i++)
		{
			prevsarrm[i] = prevs[i];
		}
                s3.merge_sort(prevsarrm, 0, nprevs - 1);
                cout<< "Number Of Com Merge: " << s3.numofcomMerge<<endl;

                for (int i = 0; i < nprevs-1; i++) 
                {
                        cout << prevsarrm[i] << " ";
                }
                cout << endl;
                cout<<endl;
                
                cout << "###After Applying QuickSort###"<<endl;
                int* prevsarrq = new int[nprevs];

		for(int i=0; i<prevs.size(); i++)
		{
			prevsarrq[i] = prevs[i];
		}

                s3.quick_sort(prevsarrq,0,nprevs);
                cout<< "Number Of Com: " << s3.numofcomQuick<<endl;

                for(int i=0; i<nprevs; i++)
                {
                        cout << prevsarrq[i] << " ";
                }
                cout << endl<<endl;

		file4.close();
        }

	ifstream file5("pokemonReverseSortedMedium.csv");

        if(!file5.is_open())
        {
                cout << "File5 Cannot Open"<< endl;
        }
        else
        {
                cout << "File5 Open Succesfully" << endl;
		cout << "Before Sorting" << endl;
		vector<int> prevm;
                string line5;
		int nprevm=1;
                getline(file5,line5);
                while(getline(file5,line5))
                {
                        istringstream iss(line5);
                        string pokn5, stat5;
                        getline(iss, pokn5, ',');
                        getline(iss, stat5, ',');
                        prevm.push_back(stoi(stat5));
			nprevm++;
                }

                for(int i=0; i<prevm.size(); i++)
                {
                        cout << prevm[i] << " ";
                }
                cout<< endl;
                cout << "After Applying InsertionSort" << endl;
		int * prevmarr = new int[nprevm];
                for(int i=0 ; i<nprevm; i++)
                {
                        prevmarr[i] = prevm[i];
                }

                Sort s4;
                s4.insertion_sort(prevmarr,nprevm);

                for(int i=0; i<nprevm; i++)
                {
                        cout << prevmarr[i] << " ";
                }

                cout << endl << endl;

                     cout << "###After Applying Mergesort###"<< endl;
                int* prevmarrm = new int[nprevm];

		for(int i=0; i<prevm.size(); i++)
		{
			prevmarrm[i] = prevm[i];
		}
                s4.merge_sort(prevmarrm, 0, nprevm - 1);
                cout<< "Number Of Com Merge: " << s4.numofcomMerge<<endl;

                for (int i = 0; i < nprevm-1; i++) 
                {
                        cout << prevmarrm[i] << " ";
                }
                cout << endl;
                cout<<endl;
                
                cout << "###After Applying QuickSort###"<<endl;
                int* prevmarrq = new int[nprevm];

		for(int i=0; i<prevm.size(); i++)
		{
			prevmarrq[i] = prevm[i];
		}

                s4.quick_sort(prevmarrq,0,nprevm);
                cout<< "Number Of Com: " << s4.numofcomQuick<<endl;

                for(int i=0; i<nprevm; i++)
                {
                        cout << prevmarrq[i] << " ";
                }
                cout << endl<<endl;

                file5.close();
        }

	ifstream file6("pokemonReverseSortedLarge.csv");

        if(!file6.is_open())
        {
                cout << "File6 Cannot Open"<< endl;
        }
        else
        {
                cout << "File6 Open Succesfully" << endl;
		cout << "Before Sorting" << endl;

		 vector<int> prevl;
                string line6;
		int nprevl=1;
                getline(file6,line6);
                while(getline(file6,line6))
                {
                        istringstream iss(line6);
                        string pokn6, stat6;
                        getline(iss, pokn6, ',');
                        getline(iss, stat6, ',');
                        prevl.push_back(stoi(stat6));
			nprevl++;
                }

                for(int i=0; i<prevl.size(); i++)
                {
                        cout << prevl[i] << " ";
                }
                cout<< endl;
                cout << "After Applying InsertionSort" << endl;
		int * prevlarr = new int[nprevl];
                for(int i=0 ; i<nprevl; i++)
                {
                        prevlarr[i] = prevl[i];
                }

                Sort s5;
                s5.insertion_sort(prevlarr,nprevl);

                for(int i=0; i<nprevl; i++)
                {
                        cout << prevlarr[i] << " ";
                }

                cout << endl << endl;

                     cout << "###After Applying Mergesort###"<< endl;
                int* prevlarrm = new int[nprevl];

		for(int i=0; i<prevl.size(); i++)
		{
			prevlarrm[i] = prevl[i];
		}
                s5.merge_sort(prevlarrm, 0, nprevl - 1);
                cout<< "Number Of Com Merge: " << s5.numofcomMerge<<endl;

                for (int i = 0; i < nprevl-1; i++) 
                {
                        cout << prevlarrm[i] << " ";
                }
                cout << endl;
                cout<<endl;
                
                cout << "###After Applying QuickSort###"<<endl;
                int* prevlarrq = new int[nprevl];

		for(int i=0; i<prevl.size(); i++)
		{
			prevlarrq[i] = prevl[i];
		}

                s5.quick_sort(prevlarrq,0,nprevl);
                cout<< "Number Of Com: " << s5.numofcomQuick<<endl;

                for(int i=0; i<nprevl; i++)
                {
                        cout << prevlarrq[i] << " ";
                }
                cout << endl<<endl;


                file6.close();

        }
	
	ifstream file7("pokemonSortedSmall.csv");

        if(!file7.is_open())
        {
                cout << "File7 Cannot Open"<< endl;
        }
        else
        {
                cout << "File7 Open Succesfully" << endl;
		cout << "Before Sorting" << endl;

                vector<int> pss;
                string line7;
		int npss=1;
                getline(file7,line7);
                while(getline(file7,line7))
                {
                        istringstream iss(line7);
                        string pokn7, stat7;
                        getline(iss, pokn7, ',');
                        getline(iss, stat7, ',');
                        pss.push_back(stoi(stat7));
			npss++;
                }

                for(int i=0; i<pss.size(); i++)
                {
                        cout << pss[i] << " ";
                }
                cout<< endl;
                cout << "After Applying InsertionSort" << endl;

		int * pssarr = new int[npss];
                for(int i=0 ; i<npss; i++)
                {
                        pssarr[i] = pss[i];
                }

                Sort s6;
                s6.insertion_sort(pssarr,npss);

                for(int i=0; i<npss; i++)
                {
                        cout << pssarr[i] << " ";
                }

                cout << endl << endl;

                cout << "###After Applying Mergesort###"<< endl;
                int* pssarrm = new int[npss];

		for(int i=0; i<pss.size(); i++)
		{
			pssarrm[i] = pss[i];
		}
                s6.merge_sort(pssarrm, 0, npss - 1);
                cout<< "Number Of Com Merge: " << s6.numofcomMerge<<endl;

                for (int i = 0; i < npss-1; i++) 
                {
                        cout << pss[i] << " ";
                }
                cout << endl;
                cout<<endl;
                
                cout << "###After Applying QuickSort###"<<endl;
                int* pssarrq = new int[npss];

		for(int i=0; i<pss.size(); i++)
		{
			pssarrq[i] = pss[i];
		}

                s6.quick_sort(pssarrq,0,npss);
                cout<< "Number Of Com: " << s6.numofcomQuick<<endl;

                for(int i=0; i<npss; i++)
                {
                        cout << pssarrq[i] << " ";
                }
                cout << endl<<endl;


                file7.close();
        }


        ifstream file8("pokemonSortedMedium.csv");

        if(!file8.is_open())
        {
                cout << "File8 Cannot Open"<< endl;
        }
        else
        {
                cout << "File8 Open Succesfully" << endl;
		cout << "Before Sorting" << endl;
		 vector<int> psm;
                string line8;
                int npsm=1;
                getline(file8,line8);
                while(getline(file8,line8))
                {
                        istringstream iss(line8);
                        string pokn8, stat8;
                        getline(iss, pokn8, ',');
                        getline(iss, stat8, ',');
                        psm.push_back(stoi(stat8));
                        npsm++;
                }

                for(int i=0; i<psm.size(); i++)
                {
                        cout << psm[i] << " ";
                }
                cout<< endl;
                cout << "After Applying InsertionSort" << endl;
                int * psmarr = new int[npsm];
                for(int i=0 ; i<npsm; i++)
                {
                        psmarr[i] = psm[i];
                }

                Sort s7;
                s7.insertion_sort(psmarr,npsm);

                for(int i=0; i<npsm; i++)
                {
                        cout << psmarr[i] << " ";
                }

                cout << endl << endl;

                cout << "###After Applying Mergesort###"<< endl;
                int* psmarrm = new int[npsm];

		for(int i=0; i<psm.size(); i++)
		{
			psmarrm[i] = psm[i];
		}
                s7.merge_sort(psmarrm, 0, npsm - 1);
                cout<< "Number Of Com Merge: " << s7.numofcomMerge<<endl;

                for (int i = 0; i < npsm-1; i++) 
                {
                        cout << psm[i] << " ";
                }
                cout << endl;
                cout<<endl;
                
                cout << "###After Applying QuickSort###"<<endl;
                int* psmarrq = new int[npsm];

		for(int i=0; i<psm.size(); i++)
		{
			psmarrq[i] = psm[i];
		}

                s7.quick_sort(psmarrq,0,npsm);
                cout<< "Number Of Com: " << s7.numofcomQuick<<endl;

                for(int i=0; i<npsm; i++)
                {
                        cout << psmarrq[i] << " ";
                }
                cout << endl<<endl;

                file8.close();
        }


        ifstream file9("pokemonSortedLarge.csv");

        if(!file9.is_open())
        {
                cout << "File9 Cannot Open"<< endl;
        }
        else
        {
                cout << "File9 Open Succesfully" << endl;
		cout << "Before Sorting" << endl;
		vector<int> psl;
                string line9;
                int npsl=1;
                getline(file9,line9);
                while(getline(file9,line9))
                {
                        istringstream iss(line9);
                        string pokn9, stat9;
                        getline(iss, pokn9, ',');
                        getline(iss, stat9, ',');
                        psl.push_back(stoi(stat9));
                        npsl++;
                }

                for(int i=0; i<psl.size(); i++)
                {
                        cout << psl[i] << " ";
                }
                cout<< endl;
                cout << "After Applying InsertionSort" << endl;
                int * pslarr = new int[npsl];
                for(int i=0 ; i<npsl; i++)
                {
                        pslarr[i] = psl[i];
                }

                Sort s8;
                s8.insertion_sort(pslarr,npsl);

                for(int i=0; i<npsl; i++)
                {
                        cout << pslarr[i] << " ";
                }

                cout << endl << endl;

                 cout << "###After Applying Mergesort###"<< endl;
                int* pslarrm = new int[npsl];

		for(int i=0; i<psl.size(); i++)
		{
			pslarrm[i] = psl[i];
		}
                s8.merge_sort(pslarrm, 0, npsl - 1);
                cout<< "Number Of Com Merge: " << s8.numofcomMerge<<endl;

                for (int i = 0; i < npsl-1; i++) 
                {
                        cout << psl[i] << " ";
                }
                cout << endl;
                cout<<endl;
                
                cout << "###After Applying QuickSort###"<<endl;
                int* pslarrq = new int[npsl];

		for(int i=0; i<psl.size(); i++)
		{
			pslarrq[i] = psl[i];
		}

                s8.quick_sort(pslarrq,0,npsl);
                cout<< "Number Of Com: " << s8.numofcomQuick<<endl;

                for(int i=0; i<npsl; i++)
                {
                        cout << pslarrq[i] << " ";
                }
                cout << endl<<endl;



                file9.close();
        }
	


}
