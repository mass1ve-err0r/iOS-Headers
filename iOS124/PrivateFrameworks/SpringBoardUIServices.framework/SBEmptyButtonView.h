//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoardUIServices/TPNumberPadButtonProtocol-Protocol.h>

@class NSString;

@interface SBEmptyButtonView : UIView <TPNumberPadButtonProtocol>
{
    unsigned int _char;
}

@property unsigned int character; // @synthesize character=_char;
- (struct CGSize)intrinsicContentSize;
- (id)initForCharacter:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

