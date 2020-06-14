//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, __NSURLSessionTaskDependencyResourceIdentifier;

@interface NSURLSessionTaskDependencyDescription : NSObject
{
    NSString *_dependentURLPath;
    NSString *_dependentMimeType;
    NSString *_parentURLPath;
    NSString *_parentMimeType;
}

+ (id)taskDependencyDescriptionWithParentMimeType:(id)arg1;
+ (id)taskDependencyDescriptionWithParentURLPath:(id)arg1;
+ (id)taskDependencyDescriptionWithMimeType:(id)arg1 parentMimeType:(id)arg2;
+ (id)taskDependencyDescriptionWithMimeType:(id)arg1 parentURLPath:(id)arg2;
+ (id)taskDependencyDescriptionWithURLPath:(id)arg1 parentMimeType:(id)arg2;
+ (id)taskDependencyDescriptionWithURLPath:(id)arg1 parentURLPath:(id)arg2;
@property(readonly) NSString *parentMimeType; // @synthesize parentMimeType=_parentMimeType;
@property(readonly) NSString *parentURLPath; // @synthesize parentURLPath=_parentURLPath;
@property(readonly) NSString *dependentMimeType; // @synthesize dependentMimeType=_dependentMimeType;
@property(readonly) NSString *dependentURLPath; // @synthesize dependentURLPath=_dependentURLPath;

// Remaining properties
@property(retain, nonatomic) __NSURLSessionTaskDependencyResourceIdentifier *_dependent; // @dynamic _dependent;
@property(retain, nonatomic) __NSURLSessionTaskDependencyResourceIdentifier *_parent; // @dynamic _parent;
@property(nonatomic) _Bool exclusive; // @dynamic exclusive;
@property(nonatomic) float priority; // @dynamic priority;

@end

