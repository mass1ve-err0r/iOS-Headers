//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface AMSSQLitePredicate : NSObject <NSCopying>
{
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

