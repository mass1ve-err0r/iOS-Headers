//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskRequest.h"

@class DMFControlGroupIdentifier;

@interface CRKSetActiveControlGroupRequest : CATTaskRequest
{
    DMFControlGroupIdentifier *_groupIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) DMFControlGroupIdentifier *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

