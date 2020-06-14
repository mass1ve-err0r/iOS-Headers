//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface OKProducerPreset : NSObject
{
    NSString *_family;
    NSString *_name;
    NSDictionary *_presetDictionary;
    NSString *_localizedName;
    NSArray *_guidelines;
    NSArray *_audioURLs;
}

- (_Bool)supportsSettingType:(unsigned long long)arg1;
- (id)_settingKeyForType:(unsigned long long)arg1;
- (_Bool)isLocal;
- (_Bool)isAvailable;
- (id)backgroundColor;
- (id)audioURLs;
- (_Bool)isDefault;
- (id)localizedName;
- (id)family;
- (id)guidelines;
- (id)pluginIdentifier;
- (id)uniqueIdentifier;
- (void)dealloc;
- (id)initWithFamily:(id)arg1 andPluginIdentifier:(id)arg2;
- (id)initWithFamily:(id)arg1 name:(id)arg2 andDictionary:(id)arg3;
- (id)init;

@end

