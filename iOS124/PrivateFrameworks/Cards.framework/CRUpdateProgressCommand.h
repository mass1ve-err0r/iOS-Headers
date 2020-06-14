//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Cards/CRCommand-Protocol.h>

@class NSDictionary, NSProgress, NSString;

@interface CRUpdateProgressCommand : NSObject <CRCommand>
{
    _Bool _animatesProgress;
    unsigned long long commandDirection;
    NSDictionary *userInfo;
    unsigned long long _event;
    NSProgress *_progress;
}

@property(nonatomic) _Bool animatesProgress; // @synthesize animatesProgress=_animatesProgress;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long event; // @synthesize event=_event;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo;
@property(nonatomic) unsigned long long commandDirection; // @synthesize commandDirection;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

