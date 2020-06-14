//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface PBRepresentationToObjectCoercion : NSObject
{
    Class _theClass;
    NSMutableDictionary *_blockByType;
    NSMutableOrderedSet *_typeOrder;
}

@property(retain, nonatomic) NSMutableOrderedSet *typeOrder; // @synthesize typeOrder=_typeOrder;
@property(retain, nonatomic) NSMutableDictionary *blockByType; // @synthesize blockByType=_blockByType;
@property(retain, nonatomic) Class theClass; // @synthesize theClass=_theClass;
- (void).cxx_destruct;
- (id)createObjectFromRepresentationConformingToType:(id)arg1 data:(id)arg2 URL:(id)arg3 outError:(id *)arg4;
- (_Bool)canCoerceFromType:(id)arg1;
- (id)availableImportTypes;
- (void)addCoercionFromType:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithClass:(Class)arg1;

@end

