//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class STSiriMessage;

@interface STSendDraftMessageRequest : AFSiriRequest
{
    STSiriMessage *_message;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)createResponse;
- (id)message;
- (id)_initWithMessage:(id)arg1;
- (_Bool)_makeAppFrontmost;

@end

