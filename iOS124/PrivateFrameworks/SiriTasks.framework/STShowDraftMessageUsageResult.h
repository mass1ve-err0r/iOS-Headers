//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriTaskUsageResult.h>

@interface STShowDraftMessageUsageResult : AFSiriTaskUsageResult
{
    long long _resultCode;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long resultCode; // @synthesize resultCode=_resultCode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_resultDescription;
- (id)description;

@end

