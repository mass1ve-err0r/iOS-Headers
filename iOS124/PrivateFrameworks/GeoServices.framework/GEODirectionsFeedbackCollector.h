//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEODirectionsFeedback, GEODirectionsFeedbackLogMessage, NSMutableArray;

@interface GEODirectionsFeedbackCollector : NSObject
{
    GEODirectionsFeedback *_currentDirectionsFeedback;
    GEODirectionsFeedbackLogMessage *_currentFeedbackLogMessage;
    double _currentDirectionsModeStartTime;
    NSMutableArray *_navigationModes;
}

@property(retain, nonatomic) GEODirectionsFeedback *currentDirectionsFeedback; // @synthesize currentDirectionsFeedback=_currentDirectionsFeedback;
@property(retain, nonatomic) GEODirectionsFeedbackLogMessage *currentFeedbackLogMessage; // @synthesize currentFeedbackLogMessage=_currentFeedbackLogMessage;
- (void).cxx_destruct;
- (id)description;
- (void)endFeedbackSessionWithTracePath:(id)arg1;
- (void)changeNavigationType:(int)arg1;
- (void)setAudioFeedback:(struct GEONavigationAudioFeedback *)arg1;
- (void)addAlightNotificationFeedback:(id)arg1;
- (void)setFinalLocation:(id)arg1 asArrival:(_Bool)arg2;
- (void)addTrafficRerouteFeedback:(id)arg1;
- (void)addRouteID:(id)arg1 routeIndex:(unsigned int)arg2 stepID:(unsigned int)arg3 completeStep:(_Bool)arg4;
- (void)addStepFeedback:(id)arg1;
- (void)addGuidanceEventFeedback:(id)arg1;
- (void)setupFeedbackSessionWithResponseID:(id)arg1;
- (void)startFeedbackSessionForResponseID:(id)arg1 withNavigationType:(int)arg2;
- (void)_updateFeedbackSessionWithResponseID:(id)arg1;
- (void)reset;
- (void)dealloc;

@end

