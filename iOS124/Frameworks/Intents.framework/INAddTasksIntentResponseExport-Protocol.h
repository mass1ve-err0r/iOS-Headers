//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INTaskList, NSArray;

@protocol INAddTasksIntentResponseExport <NSObject, JSExport>
@property(copy, nonatomic) NSArray *addedTasks;
@property(copy, nonatomic) INTaskList *modifiedTaskList;
@property(readonly, nonatomic) long long code;
@end

