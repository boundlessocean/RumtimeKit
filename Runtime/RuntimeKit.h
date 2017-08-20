//
//  RuntimeKit.h
//  RuntimeDemo
//
//  Created by boundlessocean on 2017/6/4.
//  Copyright © 2017年 ocean. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>

@interface RuntimeKit : NSObject
/**
 获取类名
 
 @param class 相应类
 @return NSString：类名
 */
+ (NSString *)bl_Objc_getClassName:(Class)class;

/**
 获取成员变量

 @param class 成员变量所在的类
 @return 返回成员变量字符串数组
 */
+ (NSArray *)bl_Objc_getIvarList:(Class)class;

/**
 获取类的属性列表, 包括私有和公有属性，即定义在延展中的属性

 @param class Class
 @return 属性列表数组
 */
+ (NSArray *)bl_Objc_getPropertyList:(Class)class;

/**
 获取对象方法列表：getter, setter, 对象方法等。但不能获取类方法
 
 @param class 方法所在的类
 @return 该类的方法列表
 */
+ (NSArray *)bl_Objc_getMethodList:(Class)class;

/**
 获取协议列表

 @param class 实现协议的类
 @return 返回该类实现的协议列表
 */
+ (NSArray *)bl_Objc_getProtocolList:(Class)class;

/**
 往类上添加新的方法与其实现
 
 @param class 相应的类
 @param methodSel 方法的名
 @param methodIMPSel 对应方法实现的方法名
 */
+ (void)bl_addMethod:(Class)class
              method:(SEL)methodSel
              method:(SEL)methodIMPSel;

/**
 方法交换
 
 @param class 交换方法所在的类
 @param originalSelector 原方法
 @param swizzledSelector 替换方法
 */

+ (void)bl_swizzleMethodWithClass:(Class)class
                 originalSelector:(SEL)originalSelector
                 swizzledSelector:(SEL)swizzledSelector;
@end
