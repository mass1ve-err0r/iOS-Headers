//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DatabaseSession.h"

@class NSMutableArray;

@interface DatabaseTransaction : DatabaseSession
{
    NSMutableArray *_postCommitHandlers;
}

- (void).cxx_destruct;
- (void)executePostCommitHandlersWithResult:(_Bool)arg1;
- (id)changeset;
- (void)addPostCommitHandler:(CDUnknownBlockType)arg1;

@end

