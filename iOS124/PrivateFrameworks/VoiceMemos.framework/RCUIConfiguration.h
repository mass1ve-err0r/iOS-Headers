//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/NSCopying-Protocol.h>

@class NSString;

@interface RCUIConfiguration : NSObject <NSCopying>
{
    NSString *_debugIdentifier;
}

+ (id)defaultConfiguration;
@property(retain, nonatomic) NSString *debugIdentifier; // @synthesize debugIdentifier=_debugIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

