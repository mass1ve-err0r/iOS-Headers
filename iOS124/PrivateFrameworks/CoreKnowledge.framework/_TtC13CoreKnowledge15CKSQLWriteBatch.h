//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreKnowledge/_TtC13CoreKnowledge20CKAbstractWriteBatch.h>

#import <CoreKnowledge/CKKnowledgeStoreWriteBatch-Protocol.h>

@class MISSING_TYPE;

@interface _TtC13CoreKnowledge15CKSQLWriteBatch : _TtC13CoreKnowledge20CKAbstractWriteBatch <CKKnowledgeStoreWriteBatch>
{
    MISSING_TYPE *queue;
}

- (_Bool)writeAndReturnError:(id *)arg1;
- (void)writeWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

