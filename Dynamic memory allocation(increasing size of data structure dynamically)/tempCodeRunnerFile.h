bool Psuedo::empty() const
{
    delete [] bucket;   //empty or delete the array bucket elements
    return (bucket == 0)? true : false;
}