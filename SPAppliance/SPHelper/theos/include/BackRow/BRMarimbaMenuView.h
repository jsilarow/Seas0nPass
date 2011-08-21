/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRMenuView.h"
#import "BackRow-Structs.h"

@class BRPhotoMediaCollection, BRMediaPlayer, NSArray, BRImageControl, NSString;

__attribute__((visibility("hidden")))
@interface BRMarimbaMenuView : BRMenuView {
@private
	BRMediaPlayer *_slideshowPhotoPlayer;	// 72 = 0x48
	BRImageControl *_listBackgroundControl;	// 76 = 0x4c
	BRControl *_slideshowPreview;	// 80 = 0x50
	BRPhotoMediaCollection *_collection;	// 84 = 0x54
	NSArray *_slideshowThemeIdentifierKeys;	// 88 = 0x58
	NSString *_nextSlideshowTheme;	// 92 = 0x5c
	NSString *_newlyRequestedTheme;	// 96 = 0x60
	BRControl *_fadeThroughBlackShroudControl;	// 100 = 0x64
	BOOL _themeSwitchInFlight;	// 104 = 0x68
	BOOL _playerVisualsChanged;	// 105 = 0x69
	BOOL _fadeThroughBlackControlNeedsLayout;	// 106 = 0x6a
}
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x31688301
- (void)_beginTransitionToNewTheme;	// 0x31687609
- (void)_fadeInAnimationCompleted:(id)animationCompleted;	// 0x3168729d
- (void)_fadeOutAnimationCompleted:(id)completed;	// 0x316874b9
- (void)_finishTransitionToNewTheme;	// 0x3168737d
- (void)_insertSlideshowPreview;	// 0x31687841
- (void)_marimbaLayerTransitionIsFinished:(id)finished;	// 0x316877c5
- (void)_playerVisualsChanged:(id)changed;	// 0x31687925
- (void)_prepareToBeginTransitionToNewTheme;	// 0x316877d9
- (void)_removeSlideshowPreview;	// 0x316878b1
- (void)controlWasActivated;	// 0x31688055
- (void)controlWasDeactivated;	// 0x31688019
- (id)currentTheme;	// 0x31687d09
- (id)currentTransitions;	// 0x31687c39
- (void)dealloc;	// 0x3168820d
- (void)layoutSubcontrols;	// 0x316884d1
- (id)musicServerID;	// 0x31687a99
- (void)playSlideshow;	// 0x31687fe5
- (id)playlistID;	// 0x31687ae9
- (void)setLoopPhotos:(BOOL)photos;	// 0x316879a5
- (void)setMusicServerID:(id)anId playlistID:(id)anId2 playlistRef:(ATVMediaCollectionRef)ref;	// 0x31687b39
- (void)setMuted:(BOOL)muted;	// 0x31687f09
- (void)setTimePerSlide:(double)slide;	// 0x316879d1
- (void)stopSlideshow;	// 0x31687f6d
- (void)switchToNewMenu;	// 0x31687a75
- (BOOL)switchToTheme:(id)theme;	// 0x31687d45
- (void)switchToTransition:(id)transition;	// 0x31687c75
- (void)toggleSlideshowPlayback;	// 0x31687f2d
@end
