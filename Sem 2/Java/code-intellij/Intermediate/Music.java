import javax.sound.midi.*;
public class Music {
    static public void play() throws MidiUnavailableException {

        Sequencer sequencer=MidiSystem.getSequencer();
        System.out.println("we got a sequencer");
    }
    public static void main(String[] args) throws Exception {
    play();
    }
}
