//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface EKRelation : NSObject
{
    NSString *_entityName;
    _Bool _toMany;
    _Bool _ownsRelated;
    NSSet *_inversePropertyNames;
    CDUnknownBlockType _inversePropertyIsApplicable;
}

+ (id)relationWithEntityName:(id)arg1 toMany:(_Bool)arg2 inversePropertyNames:(id)arg3 ownsRelated:(_Bool)arg4;
+ (id)relationWithEntityName:(id)arg1 toMany:(_Bool)arg2 inversePropertyNames:(id)arg3;
@property(copy, nonatomic) CDUnknownBlockType inversePropertyIsApplicable; // @synthesize inversePropertyIsApplicable=_inversePropertyIsApplicable;
- (void).cxx_destruct;
- (_Bool)shouldSetInverseProperty:(id)arg1 onObject:(id)arg2 forObject:(id)arg3;
@property(readonly, nonatomic) NSSet *inversePropertyNames;
@property(readonly, nonatomic) _Bool ownsRelatedObject;
@property(readonly, nonatomic) _Bool toMany;
- (id)description;
- (id)initWithEntityName:(id)arg1 toMany:(_Bool)arg2 inversePropertyNames:(id)arg3 ownsRelated:(_Bool)arg4;

@end

