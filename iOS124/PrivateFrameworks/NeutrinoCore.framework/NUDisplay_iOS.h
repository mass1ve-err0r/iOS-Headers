//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUDisplay-Protocol.h>

@class CADisplay, NSString;

@interface NUDisplay_iOS : NSObject <NUDisplay>
{
    CADisplay *_display;
}

+ (id)displays;
@property(readonly, nonatomic) CADisplay *display; // @synthesize display=_display;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_912cb5d2 size;
@property(readonly, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (id)initWithCADisplay:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

