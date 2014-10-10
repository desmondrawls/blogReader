//
//  BlogPost.m
//  BlogReader
//
//  Created by Family Pompa Alarcón Rawls on 10/6/14.
//  Copyright (c) 2014 Family Pompa Alarcón Rawls. All rights reserved.
//

#import "BlogPost.h"

@implementation BlogPost

- (id) initWithTitle:(NSString *)title{
    self = [super init];
    
    if(self){
        self.title = title;
        self.thumbnail = nil;
        self.author = nil;
    }
    
    return self;
}

+ (id) blogPostWithtitle:(NSString *)title{
    return [[self alloc] initWithTitle:title];
}

-(NSURL *) thumbnailURL{
    return [NSURL URLWithString:self.thumbnail];
}


@end
