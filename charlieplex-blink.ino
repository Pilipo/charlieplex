#define A 8
#define B 9
#define C 10

#define DELAY 50

int c[2][3][2] =
{
  { {A, B}, {A, C}, {B, C} },
  { {B, A}, {C, A}, {C, B} }
};

void setup()
{
  pinMode( A, INPUT );
  pinMode( B, INPUT );
  pinMode( C, INPUT );
}

void light( int pins[2] )
{
  pinMode( pins[0], OUTPUT );
  digitalWrite( pins[0], HIGH );

  pinMode( pins[1], OUTPUT );
  digitalWrite( pins[1], LOW );
}

void test( int pins[2] )
{
  light(pins);
  delay(DELAY);
  setup();
  delay(DELAY);
}

void test_loop ()
{
  for( int i = 0; i < 2; i++ )
  {
    for( int j = 0; j < 3; j++ ) 
    {
      test(c[i][j]);
    }
  }
}

void loop()
{
  
   test_loop();
  
}

