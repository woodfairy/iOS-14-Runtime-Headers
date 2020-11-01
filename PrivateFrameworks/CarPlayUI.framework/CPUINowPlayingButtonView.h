/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
 */

@interface CPUINowPlayingButtonView : UIView <CAMLParserDelegate> {
    CALayer * _animatedGlyphLayer;
    NSMutableArray * _barLayers;
    bool  _highlighted;
    CALayer * _platterLayer;
    unsigned int  _playbackState;
    CAStateController * _stateController;
    NSString * _stateName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) unsigned int playbackState;
@property (nonatomic, copy) NSString *stateName;
@property (readonly) Class superclass;

+ (id)classSubstitions;

- (void).cxx_destruct;
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
- (void)_handleGlyphLayerDidLoad:(id)arg1;
- (void)_updateColors;
- (id)initWithCAML:(id)arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (unsigned int)playbackState;
- (void)setHighlighted:(bool)arg1;
- (void)setPlaybackState:(unsigned int)arg1;
- (void)setStateName:(id)arg1;
- (id)stateName;
- (void)traitCollectionDidChange:(id)arg1;

@end