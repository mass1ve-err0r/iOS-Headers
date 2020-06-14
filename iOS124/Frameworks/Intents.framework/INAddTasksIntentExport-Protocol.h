//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INSpatialEventTrigger, INTaskList, INTemporalEventTrigger, NSArray;

@protocol INAddTasksIntentExport <NSObject, JSExport>
@property(copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
@property(copy, nonatomic) INSpatialEventTrigger *spatialEventTrigger;
@property(copy, nonatomic) NSArray *taskTitles;
@property(copy, nonatomic) INTaskList *targetTaskList;
- (id)init;
@end

