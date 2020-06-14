//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAdControllerFactory-Protocol.h>

@class NSString;
@protocol NUAdSettings;

@interface NUAdControllerFactory : NSObject <NUAdControllerFactory>
{
    id <NUAdSettings> _settings;
}

@property(readonly, nonatomic) id <NUAdSettings> settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (id)createAdControllerForProvider:(id)arg1 document:(id)arg2 viewport:(id)arg3;
- (id)initWithSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

