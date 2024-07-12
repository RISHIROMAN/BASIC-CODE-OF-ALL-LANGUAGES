class student {
    int rollno;
    String name;
    float fee;
    Student (int rollno,String name,float fee){
        rollno=rollno;
        name=name;
        fee =fee;
    }
    void display(){
        System.out.println(rollno+" "+name+" "+fee);
    }
    public static void main(String[] args) {
        student1=student(45,"rishi",5677777);
    }
}