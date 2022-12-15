
struct CountsByUsage
{
  int lowCount;
  int mediumCount;
  int highCount;
};

struct CountsByUsage
countBatteriesByUsage (const int *cycles, int nBatteries)
{
  struct CountsByUsage counts = { 0, 0, 0 };
   //Written solution
 for(int i=0;i<nBatteries;i++)
 {
     if(cycles[i]<310)
     {
         counts.lowCount++;
     }
     if(cycles[i]>=310 && cycles[i]<929)
     {
         counts.mediumCount++;
     }
     if(cycles[i]>930)
     {
         counts.highCount++;
     }
 }

  return counts;
}

void
testBucketingByNumberOfCycles ()
{
  const int chargeCycleCounts[] = { 100, 300, 500, 600, 900, 1000 };
  const int numberOfBatteries =
    sizeof (chargeCycleCounts) / sizeof (chargeCycleCounts[0]);
  printf ("Counting batteries by usage cycles...\n");
  struct CountsByUsage counts =
    countBatteriesByUsage (chargeCycleCounts, numberOfBatteries);
 /* assert (counts.lowCount == 2);
  assert (counts.mediumCount == 3);
  assert (counts.highCount == 1);*/
  printf("\n");
  printf("Number of lowCount batteries %d ",counts.lowCount);printf("\n");
  printf("Number of mediumCount batteries %d",counts.mediumCount);
  printf("\n");
  printf("Number of highCount batteries %d",counts.highCount);
  printf("\n");
  printf ("Done counting :)\n");
}

int
main ()
{
  testBucketingByNumberOfCycles ();
  return 0;
}
