//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/RETrainingSimulationClientDelegate-Protocol.h>

@class NSString, RETrainingSimulationClient;

@interface RETrainingSimulator : NSObject <RETrainingSimulationClientDelegate>
{
    RETrainingSimulationClient *_client;
    NSString *_targetProcessName;
    NSString *_relevanceEngineName;
}

@property(readonly, nonatomic) NSString *relevanceEngineName; // @synthesize relevanceEngineName=_relevanceEngineName;
@property(readonly, nonatomic) NSString *targetProcessName; // @synthesize targetProcessName=_targetProcessName;
- (void).cxx_destruct;
- (id)storedDiagnosticLogsPath;
- (_Bool)runActionOfElementWithDescription1:(id)arg1;
- (id)availableRelevanceEngines;
- (id)allElements;
- (id)allElementIdentifiers;
- (_Bool)performCommand:(id)arg1 withOptions:(id)arg2;
- (void)createElementFromDescription:(id)arg1;
- (void)trainingSimulationClientWasInvalidated:(id)arg1;
- (void)trainingSimulationClientWasInterrupted:(id)arg1;
- (id)initWithTargetProcess:(id)arg1 relevanceEngine:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

