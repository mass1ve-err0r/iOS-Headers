//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PLColorSpaceIdentity-Protocol.h>

@class NSString;

@interface PHImageRequestColorSpace : NSObject <PLColorSpaceIdentity>
{
    NSString *_colorSpaceName;
}

@property(copy, nonatomic) NSString *colorSpaceName; // @synthesize colorSpaceName=_colorSpaceName;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

