//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AgentOperation.h"

@class AgentShutdownAssertion;

@interface AgentShutdownOperation : AgentOperation
{
    AgentShutdownAssertion *_assertion;
}

- (void).cxx_destruct;
- (void)run;
- (id)initWithShutdownAssertion:(id)arg1;

@end

