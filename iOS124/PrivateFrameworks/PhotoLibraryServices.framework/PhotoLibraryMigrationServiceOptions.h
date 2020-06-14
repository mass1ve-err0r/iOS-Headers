//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>
#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface PhotoLibraryMigrationServiceOptions : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _option;
    NSString *_clientBundleId;
    NSString *_suggestedDestinationName;
}

+ (_Bool)supportsSecureCoding;
@property unsigned char option; // @synthesize option=_option;
@property(copy) NSString *suggestedDestinationName; // @synthesize suggestedDestinationName=_suggestedDestinationName;
@property(readonly) NSString *clientBundleId; // @synthesize clientBundleId=_clientBundleId;
- (void).cxx_destruct;
- (_Bool)isPLMSOption:(unsigned char)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

