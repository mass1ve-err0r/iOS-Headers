//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UIClassSwapper : NSObject
{
    NSString *className;
    id object;
}

+ (id)swapperForObject:(id)arg1 withClassName:(id)arg2;
- (void).cxx_destruct;
- (id)object;
- (id)className;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 andClassName:(id)arg2;

@end

