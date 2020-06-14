//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PBCoercionRegistry : NSObject
{
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSMutableDictionary *_member_exporterByClass;
    NSMutableDictionary *_member_importerByClass;
    NSMutableDictionary *_member_classCoercionByClass;
}

+ (id)defaultRegistry;
+ (id)objectFromArchivedData:(id)arg1 URL:(id)arg2 requestedClass:(Class)arg3 typeIdentifier:(id)arg4 outError:(id *)arg5;
+ (id)archivedDataFromObject:(id)arg1 requestedType:(id)arg2 outError:(id *)arg3;
@property(retain, nonatomic) NSMutableDictionary *member_classCoercionByClass; // @synthesize member_classCoercionByClass=_member_classCoercionByClass;
@property(retain, nonatomic) NSMutableDictionary *member_importerByClass; // @synthesize member_importerByClass=_member_importerByClass;
@property(retain, nonatomic) NSMutableDictionary *member_exporterByClass; // @synthesize member_exporterByClass=_member_exporterByClass;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
- (void).cxx_destruct;
- (id)_member_availableClassesToCoerceToFromClass:(Class)arg1;
- (void)loadRepresentationOfObject:(id)arg1 asType:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_member_exporterFromClass:(Class)arg1 toType:(id)arg2;
- (id)newObjectOfClass:(Class)arg1 fromContentsOfURL:(id)arg2 ofType:(id)arg3 outError:(id *)arg4;
- (id)newObjectOfClass:(Class)arg1 fromData:(id)arg2 ofType:(id)arg3 outError:(id *)arg4;
- (id)_newObjectOfClass:(Class)arg1 fromData:(id)arg2 URL:(id)arg3 ofType:(id)arg4 outError:(id *)arg5;
- (_Bool)canCoerceObjectOfClass:(Class)arg1 toObjectOfClass:(Class)arg2;
- (_Bool)canCoerceObjectOfClass:(Class)arg1 toRepresentationConformingToType:(id)arg2;
- (_Bool)canCoerceFromRepresentationConformingToType:(id)arg1 toObjectOfClass:(Class)arg2;
- (id)acceptableRepresentationTypesForCreatingObjectOfClass:(Class)arg1;
- (id)_member_acceptableRepresentationTypesForCreatingObjectOfClass:(Class)arg1;
- (id)availableRepresentationTypesForClass:(Class)arg1;
- (id)_member_availableDirectRepresentationTypesForClass:(Class)arg1;
- (void)registerCoercionFromObjectOfClass:(Class)arg1 toObjectOfClass:(Class)arg2 coercionBlock:(CDUnknownBlockType)arg3;
- (void)_member_registerCoercionFromObjectOfClass:(Class)arg1 toObjectOfClass:(Class)arg2 coercionBlock:(CDUnknownBlockType)arg3;
- (void)registerCoercionFromRepresentationConformingToType:(id)arg1 toObjectOfClass:(Class)arg2 coercionBlock:(CDUnknownBlockType)arg3;
- (void)_member_registerCoercionFromRepresentationConformingToType:(id)arg1 toObjectOfClass:(Class)arg2 coercionBlock:(CDUnknownBlockType)arg3;
- (void)registerCoercionFromObjectOfClass:(Class)arg1 toRepresentationOfType:(id)arg2 coercionBlock:(CDUnknownBlockType)arg3;
- (void)_member_registerCoercionFromObjectOfClass:(Class)arg1 toRepresentationOfType:(id)arg2 coercionBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (id)_availableClassesToCoerceFromClass:(Class)arg1;

@end

