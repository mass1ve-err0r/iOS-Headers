//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface ADAdServerManifestRecord : NSObject
{
    _Bool _updateInProgress;
    _Bool _temporary;
    NSString *_name;
    NSURL *_URL;
    NSDictionary *_manifest;
    double _lastUpdate;
}

@property(nonatomic) _Bool temporary; // @synthesize temporary=_temporary;
@property(nonatomic) double lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(nonatomic) _Bool updateInProgress; // @synthesize updateInProgress=_updateInProgress;
@property(retain, nonatomic) NSDictionary *manifest; // @synthesize manifest=_manifest;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)dealloc;

@end

