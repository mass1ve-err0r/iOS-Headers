//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRResponseMessage.h>

@interface TRProvisionAnisetteDataResponse : TRResponseMessage
{
    _Bool _didSucceed;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool didSucceed; // @synthesize didSucceed=_didSucceed;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

