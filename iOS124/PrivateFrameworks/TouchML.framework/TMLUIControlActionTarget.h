//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMLUIControlActionTarget : NSObject
{
    NSString *_signalName;
    unsigned long long _controlEvent;
}

- (void).cxx_destruct;
- (void)controlAction:(id)arg1 forEvent:(id)arg2;
- (id)initWithSignal:(id)arg1 controlEvent:(unsigned long long)arg2;

@end

