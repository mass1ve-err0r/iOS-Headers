//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskRequest.h"

@interface CRKFetchBooksRequest : CATTaskRequest
{
    _Bool _includeImages;
}

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(nonatomic) _Bool includeImages; // @synthesize includeImages=_includeImages;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isValidWithError:(id *)arg1;

@end

