int apax(int nbr, int limitNbr)
{
  if(nbr == 0)
    return(limitNbr);

  if(nbr > 0 && nbr >= limitNbr)
    return(limitNbr*-1);

  if(nbr < 0 && nbr <= limitNbr)
    return(limitNbr*-1);

  else 
    return(nbr);
}