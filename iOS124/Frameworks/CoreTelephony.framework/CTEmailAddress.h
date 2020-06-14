//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/CTMessageAddress-Protocol.h>
#import <CoreTelephony/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CTEmailAddress : NSObject <NSCopying, CTMessageAddress>
{
    NSString *_address;
}

+ (id)emailAddress:(id)arg1;
@property(readonly) NSString *address; // @synthesize address=_address;
- (id)canonicalFormat;
- (id)encodedString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithAddress:(id)arg1;

@end

