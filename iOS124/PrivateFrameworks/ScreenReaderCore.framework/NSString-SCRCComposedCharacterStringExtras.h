//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (SCRCComposedCharacterStringExtras)
- (id)scrc_composedCharacterEnumerator;
- (id)scrc_decodeUnicodeForKVO;
- (id)scrc_encodeUnicodeForKVO;
- (_Bool)scrc_containsNumberOfGlyphs:(unsigned char)arg1;
- (unsigned char)_countNumberOfGlyphs:(unsigned char)arg1;
- (unsigned char)scrc_countNumberOfGlyphs;
- (_Bool)scrc_containsOnlyOneGlyph;
- (id)scrc_composedCharacterAtIndex:(unsigned long long)arg1;
@end

