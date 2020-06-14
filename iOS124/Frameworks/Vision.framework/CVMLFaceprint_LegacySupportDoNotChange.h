//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSSecureCoding-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CVMLFaceprint_LegacySupportDoNotChange : NSObject <NSSecureCoding>
{
    unsigned int _platform;
    unsigned int _profile;
    NSData *_faceprint;
    NSString *_key;
    NSString *_faceprintInputPath;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSString *faceprintInputPath; // @synthesize faceprintInputPath=_faceprintInputPath;
@property unsigned int profile; // @synthesize profile=_profile;
@property unsigned int platform; // @synthesize platform=_platform;
@property(copy) NSString *key; // @synthesize key=_key;
@property(retain) NSData *faceprint; // @synthesize faceprint=_faceprint;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

