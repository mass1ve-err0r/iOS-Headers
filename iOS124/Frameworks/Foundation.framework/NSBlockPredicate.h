//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSPredicate.h>

@interface NSBlockPredicate : NSPredicate
{
    CDUnknownBlockType _block;
}

+ (_Bool)supportsSecureCoding;
- (CDUnknownBlockType)_predicateBlock;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)predicateFormat;
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

