//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PLMomentNodeCache : NSObject
{
    NSMutableDictionary *__nodesByObjectID;
    NSMutableDictionary *__nodesByUserTag;
    NSMutableDictionary *__nodesByRowID;
    struct sqlite3 *__momentsDatabase;
    struct sqlite3_stmt *__spatialInsertStatement;
    struct sqlite3_stmt *__temporalInsertStatement;
    struct sqlite3_stmt *__spatialSelectStatement;
    struct sqlite3_stmt *__temporalSelectStatement;
}

@property(readonly, nonatomic) struct sqlite3_stmt *_temporalSelectStatement; // @synthesize _temporalSelectStatement=__temporalSelectStatement;
@property(readonly, nonatomic) struct sqlite3_stmt *_spatialSelectStatement; // @synthesize _spatialSelectStatement=__spatialSelectStatement;
@property(readonly, nonatomic) struct sqlite3_stmt *_temporalInsertStatement; // @synthesize _temporalInsertStatement=__temporalInsertStatement;
@property(readonly, nonatomic) struct sqlite3_stmt *_spatialInsertStatement; // @synthesize _spatialInsertStatement=__spatialInsertStatement;
@property(readonly, nonatomic) struct sqlite3 *_momentsDatabase; // @synthesize _momentsDatabase=__momentsDatabase;
@property(readonly, nonatomic) NSMutableDictionary *_nodesByRowID; // @synthesize _nodesByRowID=__nodesByRowID;
@property(readonly, nonatomic) NSMutableDictionary *_nodesByUserTag; // @synthesize _nodesByUserTag=__nodesByUserTag;
@property(readonly, nonatomic) NSMutableDictionary *_nodesByObjectID; // @synthesize _nodesByObjectID=__nodesByObjectID;
- (id)taggedNeighborsOfNode:(id)arg1;
- (id)nodesWithTag:(id)arg1;
- (id)spatialNeighborsOfNodes:(id)arg1 forSigma:(double)arg2;
- (id)temporalNeighborsOfNode:(id)arg1 forTheta:(double)arg2;
- (id)nodesWithinMinDate:(double)arg1 maxDate:(double)arg2;
- (unsigned long long)countOfTemporalNeighborsOfNode:(id)arg1 forTheta:(double)arg2;
- (id)tieBreakerForNode:(id)arg1;
- (id)nodeWithPartialAssetDictionary:(id)arg1;
- (id)nodeForAsset:(id)arg1;
- (void)performBatch:(CDUnknownBlockType)arg1;
- (void)prepareAndExecuteStatement:(const char *)arg1;
- (void)executePreparedStatement:(struct sqlite3_stmt *)arg1 withStatementBlock:(CDUnknownBlockType)arg2;
- (struct sqlite3_stmt *)prepareStatement:(const char *)arg1;
- (void)addNodeByUserTag:(id)arg1;
- (void)insertNode:(id)arg1;
- (void)closeMomentsDatabase;
- (void)setupMomentsDatabase;
- (void)openMomentsDatabase;
- (void)dealloc;
- (id)init;

@end

