//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TMLWeakReferenceObject : NSObject
{
    id _object;
}

+ (id)weakReferenceWithObject:(id)arg1;
@property(readonly, nonatomic) __weak id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithObject:(id)arg1;

@end

