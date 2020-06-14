//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, TSPObject;

@protocol TSDModelContainer
@property(readonly, nonatomic) NSArray *containedModels;
- (void)moveModel:(TSPObject *)arg1 toIndex:(unsigned long long)arg2;
- (void)removeContainedModel:(TSPObject *)arg1;
- (void)insertContainedModel:(TSPObject *)arg1 atIndex:(unsigned long long)arg2;

@optional
@property(readonly, nonatomic) _Bool supportsCollaborativeEditing;
@end

