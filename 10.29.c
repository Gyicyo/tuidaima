 
通过scanf自定义输入数组元素个数（输入\n自动终止）
  do{scanf("%d",&a[i]);
    i++;}while(getchar()!='\n');
    for(int j=0;j<i;j++)
        printf("%4d",a[j]);




for的多样利用
  for(scanf("%d",&n);n<5;n++)
        printf("Y");