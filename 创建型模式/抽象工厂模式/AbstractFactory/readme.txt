抽象工厂和工厂模式区别：
工厂模式：一类对象提供创建接口或延迟对象的创建到子类
抽象工厂：一组（多类）相关或依赖的对象提供接口。

优点：
1 增加新的工厂和产品族容易《符合开闭原则，对扩展开放，对修改封闭》

缺点：
1 增加新的产品等级结构麻烦，修改修改所有工厂角色。不能很好地支持“开闭原则”