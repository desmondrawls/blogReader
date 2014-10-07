//
//  BlogPost.h
//  BlogReader
//
//  Created by Family Pompa Alarcón Rawls on 10/6/14.
//  Copyright (c) 2014 Family Pompa Alarcón Rawls. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *author;

//Designated Initializer
- (id) initWithTitle:(NSString *)title;
+ (id) blogPostWithtitle:(NSString *)title;

@end
