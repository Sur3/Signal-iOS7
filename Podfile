platform :ios, '7.1'
source 'https://github.com/CocoaPods/Specs.git'
inhibit_all_warnings!
workspace 'Signal'

def shared_pods
 pod 'OpenSSL',                    '~> 1.0.201'
 pod 'libPhoneNumber-iOS',         '~> 0.8.2'
 pod 'AxolotlKit',                 '~> 0.6.2'
 pod 'PastelogKit',                '~> 1.2'
 pod 'TwistedOakCollapsingFutures','~> 1.0'
 pod 'AFNetworking',               '~> 2.5.3'
 pod 'Mantle',                     '~> 2.0'
 pod 'FFCircularProgressView',     '>= 0.1'
 pod 'SCWaveformView',             '~> 1.0'
 pod 'YapDatabase/SQLCipher',      '<= 2.5.4’
 pod 'SSKeychain'     
 pod 'DJWActionSheet'
 pod 'ProtocolBuffers'

 pod 'SocketRocket'
 pod 'JSQMessagesViewController',  :git => 'https://github.com/WhisperSystems/JSQMessagesViewController', :commit => '9be8f6ed65eb55368a5ff767f055158cf585065f'
 pod 'APDropDownNavToolbar',       :git => 'https://github.com/corbett/APDropDownNavToolbar.git', :branch => 'master'
 pod 'UICKeyChainStore',           :podspec => 'Podspecs/UICKeyChainStore.podspec'
end

target 'Signal' do
 shared_pods
end

target 'SignalTests' do
 shared_pods
end
